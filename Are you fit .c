#include<stdio.h>
int main(){
int age;
float height;
float weight;
double condition;

printf("enter your age:  ");
scanf("%d",&age);
if(age<0){
printf("bro you're not existing yet");
}
else if(age>100){
printf("Go play somewhere else grandpa");
}
else{
printf("enter your height in meters:  ");
scanf("%f",& height);
if(height>2.30){
printf("we don't work with giants here get out");
}
else if(height<1){
printf("HAHAHA you think you're funny");
}
else{
printf("enter your weight in kg:  ");
scanf("%f",& weight);
if(weight>300){
printf("you're a cow mashallah");
}
else if(weight<15){
printf("how are you holding your phone with this weight");
}
else{
condition = weight/(height*height);
if(condition<18.5){
printf("your suffer loss of wheight ");
printf("try to:\n");
printf("1. Increase Caloric Intake: Eat energy-dense foods like nuts, avocados, and healthy oils.\n");
printf("2. Focus on Protein: Include meat, fish, eggs, legumes, and dairy to build muscle.\n");
printf("3. Frequent Meals: Eat 5-6 small meals daily.\n");
printf("4. Strength Training: Lift weights to build muscle mass.\n");
printf("5. Avoid Junk Food: Skip sugary and processed foods.\n");
printf("6. High-Calorie Drinks: Try smoothies or protein shakes with milk, fruits, and nut butter.\n");
printf("7. Boost Appetite: Use spices, eat smaller meals, and exercise regularly.\n");
printf("8. Consult a Dietitian: If you're struggling to gain weight.\n");
printf("9. Healthy Lifestyle: Get enough sleep and manage stress.\n");
printf("Gaining weight healthily takes time and consistency! \n");
}
else if(condition<24.9 && condition>18.5){
printf("you're good ");
printf("try to: \n");
printf("1. Eat balanced meals: Focus on protein, complex carbs, and healthy fats.\n");
printf("2. Control portion sizes: Avoid overeating.\n");
printf("3. Drink water regularly: Helps with satiety and digestion.\n");
printf("4. Exercise regularly: Include walking, running, or strength training.\n");
printf("5. Avoid processed foods: Such as fast food and sweets.\n");
printf("6. Sleep well: Aim for 7-8 hours daily to regulate hormones.\n");
printf("7. Track your weight: Weigh yourself regularly to monitor changes.\n");
printf("8. Manage stress: High stress can lead to weight gain.\n");
printf("9. Eat fiber: Include vegetables and fruits for better digestion.\n");
printf("Maintaining weight requires a balance of nutrition and activity! \n");
}

else if(condition<29.9 && condition>25.5){
printf("Go to gym ");
printf("try to:  \n");
printf("1. Increase caloric intake: Eat energy-dense foods like nuts, avocados, and healthy oils.\n");
printf("2. Focus on protein: Include meat, fish, eggs, legumes, and dairy to build muscle.\n");
printf("3. Eat frequent meals: Have 5-6 small meals daily.\n");
printf("4. Strength training: Lift weights to build muscle mass.\n");
printf("5. Avoid junk food: Skip sugary and processed foods.\n");
printf("6. High-calorie drinks: Try smoothies or protein shakes with milk, fruits, and nut butter.\n");
printf("7. Boost appetite: Use spices, eat smaller meals, and exercise regularly.\n");
printf("8. Consult a dietitian: If you're struggling to gain weight.\n");
printf("9. Healthy lifestyle: Get enough sleep and manage stress.\n");
printf("Gaining weight healthily takes time and consistency! \n");
}
else if(condition>=30){
printf("you're overweight ");
printf("try to:  \n");
printf("1. Reduce caloric intake: Eat smaller portions and avoid high-calorie foods.\n");
printf("2. Focus on whole foods: Choose vegetables, fruits, lean proteins, and whole grains.\n");
printf("3. Limit sugary drinks: Avoid sodas, juices, and energy drinks.\n");
printf("4. Exercise regularly: Aim for at least 30 minutes of moderate activity daily.\n");
printf("5. Avoid processed foods: Cut down on fast food, snacks, and packaged meals.\n");
printf("6. Stay hydrated: Drink water throughout the day to support metabolism.\n");
printf("7. Get enough sleep: Aim for 7-8 hours per night to regulate hormones.\n");
printf("8. Manage stress: Practice mindfulness or meditation to avoid emotional eating.\n");
printf("9. Seek professional help: Consult a doctor or dietitian for a personalized plan.\n");
printf("Managing obesity requires commitment and a healthy lifestyle! 😊\n");

    

}}}}



return 0;
}