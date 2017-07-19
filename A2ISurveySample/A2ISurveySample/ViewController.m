//
//  ViewController.m
//  A2IIncludePodsTest
//
//  Created by anand mahajan on 30/05/17.
//  Copyright © 2017 Sphinx. All rights reserved.
//

#import "ViewController.h"
#import <A2ISurveyFramework/A2ISurveyFramework.h>

@interface ViewController ()<A2ISurveyDelegate,A2IDashboardDelegate>
-(IBAction)clickOpenSurvey:(id)sender;
-(IBAction)clickOpenDashboard:(id)sender;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
  /*  A2ISurveyViewController *cnt = [A2ISurveyViewController new];
    cnt.survey_id =@"NJXyEUf6";
    cnt.delegate =self;
    [cnt scheduleInterceptFromViewController:self alertTitle:@"A2I" alertBody:@"Do you want to give feedback?" positiveActionTitle:@"POSITIVE" cancelTitle:@"Cancel" afterInstallInterval:120 afterAcceptInterval:120 afterDeclineInterval:120];*/
}
-(IBAction)clickOpenSurvey:(id)sender
{
    A2ISurveyViewController *cnt = [A2ISurveyViewController new];
    cnt.survey_id =@"NJXyEUf6";
    [cnt presentFromViewController:self animated:YES completion:nil];
}
-(IBAction)clickOpenDashboard:(id)sender
{
    A2IDashboardViewController *cnt = [A2IDashboardViewController new];
    cnt.delegate =self;
    cnt.dashboard_id =@"fNyAHHY3";
    [cnt presentFromViewController:self animated:YES completion:nil];

}

#pragma marks -- A2ISurveyDelegate <NSObject>
/*
 * Use this delegate if you want to perform some action when A2ISurveyViewController is dismissed.
 */
-(void)A2ISurveyViewControllerDidDismissed
{

}

#pragma marks -- A2IDashboardDelegate <NSObject>
/*
 * Use this delegate if you want to perform some action when A2IDashboardViewController is dismissed.
 */
-(void)A2IDashboardViewControllerDidDismissed
{

}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
