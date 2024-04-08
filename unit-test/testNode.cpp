#include "pch.h"
#include <string>

#include "LinkedList.h"

struct TestData
{  
  int Data;
};

typedef LinkedList<TestData> TestLinkedList;

TEST(LinkedListUseCase, LinkedList) 
{  
  TestLinkedList* list = new TestLinkedList();
  std::auto_ptr<TestLinkedList> auto_list(list);

  // Empty list
  EXPECT_EQ(list->GetCount(), 0);

  // One item added
  TestData* testData = new TestData();
  testData->Data = 0;
  list->Add(testData);
  EXPECT_EQ(list->GetCount(), 1);
  EXPECT_EQ(list->Get(0)->Data, 0);

  // Added two more
  testData = new TestData();
  testData->Data = 1;
  list->Add(testData);
  testData = new TestData();
  testData->Data = 2;
  list->Add(testData);
  EXPECT_EQ(list->GetCount(), 3);
  EXPECT_EQ(list->Get(1)->Data, 1);
  EXPECT_EQ(list->Get(2)->Data, 2);

  // Remove all
  list->Remove(0);
  list->Remove(0);
  list->Remove(0);
  EXPECT_EQ(list->GetCount(), 0);
}
