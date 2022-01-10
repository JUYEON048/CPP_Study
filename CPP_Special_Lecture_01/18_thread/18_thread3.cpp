// 18_thread3.cpp

// How to compile !!
// $ g++ 18_thread3.cpp -lpthread -std=c++11

// C++11 부터 스레드를 표준 라이브러리를 통해 지원합니다.
#include <iostream>
#include <thread>
#include <mutex>

# if 0
void foo() {
  std::cout << "foo" << std::endl;
}

int main() {
  std::cout << "main thread" << std::endl;
  std::thread t1(&foo);

  t1.join();
}
# endif


int sum = 0;
std::mutex m;

void thread_routine(const char* name) {
  std::cout << name << std::endl;

  for (int i = 0; i < 1000000; ++i) {
    m.lock();
    sum += 1;
    m.unlock();
  }
}

int main() {
  std::thread t1(&thread_routine, "A");
  std::thread t2(&thread_routine, "B");

  t1.join();
  t2.join();

  printf("sum: %d\n", sum);
}


/* 
> What is the join function?
자식 스레드가 아직 실행 중인데 부모 스레드가 return 0;에 도달하여 프로그램이 종료되는 경우이다. 
기본적으로 메인 스레드가 종료되고도 자식 스레드가 계속 실행 중인 것은 비정상적인 상황으로 본다. 
때문에 이 경우, 강제로 오류를 발생시킨다. 만약 이것이 정말 프로그래머가 의도한 경우라면 잠시 후 볼 detach() 함수를 사용해야 한다.
어쨌든 이러한 경우를 위해 C++에선 join() 이라는 멤버 함수를 제공한다. 
만약 my_thread1가 join()을 호출하게 되면 현재 스레드(부모 스레드)는 my_thread1 스레드가 실행이 끝날 때까지 멈추게 된다. 
즉 my_thread1 스레드의 실행이 끝나면 실행을 재개한다. 
join이라는 의미는 부모 스레드에 의해 갈라진 자식 스레드가 실행이 종료되어 부모 스레드에 합류한다는 것으로 생각하면 이해하기 편하다.
(Reference: https://woo-dev.tistory.com/161)
*/