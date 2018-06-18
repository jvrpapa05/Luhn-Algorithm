// Luhn Algorithm

int cardNumber [16];

int oddNumber [8];
int evenNumber[8];

int multiplyOdd[8];

int i;

int odd;
int even;
int multiply;

int initialEven;
int finalEven;

String initialNumber;
String finalNumber;

int Length;
int j;

int initialOdd;
int finalOdd;

int finalCount;
int decide;

String storeNumber;

int l;

boolean process = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Test begin...");
  Serial.println();
  /*
    for (int i = 0; i < 16; i = i + 2) {
      //Serial.print(cardNumber[i]);
      oddNumber[odd] = cardNumber[i];
      odd++;
    }

    for (int i = 1; i < 16; i = i + 2) {
      //Serial.print(cardNumber[i]);
      evenNumber[even] = cardNumber[i];
      even++;
    }

    Serial.println("Odd numbers");
    for (int odd = 0; odd < 8; odd++) {
      Serial.print(oddNumber[odd]);
      multiplyOdd[multiply] = oddNumber[odd] * 2;
      multiply++;
    }
    Serial.println();

    Serial.println("Even numbers");
    for (int even = 0; even < 8; even++) {
      Serial.print(evenNumber[even]);
      initialEven = evenNumber[even];
      finalEven = finalEven + initialEven;
    }
    Serial.println();
    Serial.println(String("Count of Even Numbers is: ") + finalEven);
    Serial.println();

    Serial.println("Multiplied Odd numbers");
    for (int multiply = 0; multiply < 8; multiply++) {
      Serial.print(multiplyOdd[multiply] + String(","));
      initialNumber = multiplyOdd[multiply];
      finalNumber = finalNumber + initialNumber;
    }
    Serial.println();
    Serial.println(String("String of numbers are: ") + finalNumber);
    Serial.println();

    Serial.println(String("Length of Numbers: ") + finalNumber.length());

    Length = finalNumber.length();
    for (int j = 0; j < Length; j++) {
      //Serial.println(finalNumber.charAt(j));
      initialOdd = finalNumber.charAt(j) - '0';
      finalOdd = finalOdd + initialOdd;
    }
    Serial.println();
    Serial.println(String("Count of Odd Numbers is: ") + finalOdd);
    Serial.println();

    finalCount = finalEven + finalOdd;
    decide = finalCount % 10;
    if (decide == 0) {
      Serial.println("VALID!");
    } else {
      Serial.println("NOT VALID!");
    }
  */
}

void loop() {
  if (Serial.available() > 0) {
    storeNumber = Serial.readStringUntil('\n');
    process = true;
  }

  if (process == true) {

    Serial.println("Processing...");
    Serial.println();
    Serial.println("Credit Card No. is: ");
    for (int l = 0; l < 16; l++) {
      cardNumber [l] = storeNumber.charAt(l) - '0';
      Serial.print(cardNumber [l] = storeNumber.charAt(l) - '0');
    }

    Serial.println();

    PROCESS();
    clearData();
    process = false;
  }

}

void PROCESS() {
  for (int i = 0; i < 16; i = i + 2) {
    //Serial.print(cardNumber[i]);
    oddNumber[odd] = cardNumber[i];
    odd++;
  }

  for (int i = 1; i < 16; i = i + 2) {
    //Serial.print(cardNumber[i]);
    evenNumber[even] = cardNumber[i];
    even++;
  }

  Serial.println("Odd numbers");
  for (int odd = 0; odd < 8; odd++) {
    Serial.print(oddNumber[odd]);
    multiplyOdd[multiply] = oddNumber[odd] * 2;
    multiply++;
  }
  Serial.println();

  Serial.println("Even numbers");
  for (int even = 0; even < 8; even++) {
    Serial.print(evenNumber[even]);
    initialEven = evenNumber[even];
    finalEven = finalEven + initialEven;
  }
  Serial.println();
  Serial.println(String("Count of Even Numbers is: ") + finalEven);
  Serial.println();

  Serial.println("Multiplied Odd numbers");
  for (int multiply = 0; multiply < 8; multiply++) {
    Serial.print(multiplyOdd[multiply] + String(","));
    initialNumber = multiplyOdd[multiply];
    finalNumber = finalNumber + initialNumber;
  }
  Serial.println();
  Serial.println(String("String of numbers are: ") + finalNumber);
  Serial.println();

  Serial.println(String("Length of Numbers: ") + finalNumber.length());

  Length = finalNumber.length();
  for (int j = 0; j < Length; j++) {
    //Serial.println(finalNumber.charAt(j));
    initialOdd = finalNumber.charAt(j) - '0';
    finalOdd = finalOdd + initialOdd;
  }
  Serial.println();
  Serial.println(String("Count of Odd Numbers is: ") + finalOdd);
  Serial.println();

  finalCount = finalEven + finalOdd;
  decide = finalCount % 10;

  if (decide == 0) {
    Serial.println("VALID!");
  } else {
    Serial.println("NOT VALID!");
  }

}

void clearData() {
  i = 0;
  odd = 0;
  even = 0;
  multiply = 0;
  initialEven = 0;
  finalEven = 0;
  Length = 0;
  j = 0;
  initialOdd = 0;
  finalOdd = 0;
  finalCount = 0;
  decide = 0;
  l = 0;
  storeNumber = "";
  initialNumber = "";
  finalNumber = "";
}
