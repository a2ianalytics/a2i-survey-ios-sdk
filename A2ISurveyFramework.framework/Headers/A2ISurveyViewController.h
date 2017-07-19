//
//  WebViewController.h
//  A2ISurveySDK
//
//

#import <UIKit/UIKit.h>

@protocol A2ISurveyDelegate <NSObject>
/*
 * Use this delegate if you want to perform some action when A2ISurveyViewController is dismissed.
 */
-(void)A2ISurveyViewControllerDidDismissed;
@end

@interface A2ISurveyViewController : UIViewController

+(id)initialize;

/**
 * Pass the Survey Id using this property.
 * Survey Id is mandatory for Survey.
 * You wont be able to use this SDK until and unless you have the Survey Id.
 **/
@property (nonatomic,strong)NSString *survey_id;

/**
 * The property can be used to change the color of cancel button appearing on A2ISurveyViewController
 * You just need to pass UIColor from your controller
 **/
@property (nonatomic,strong)UIColor *cancelButtonColor;

/*
 * Default is "Cancel".
 * Use this property if you need to customize cancel button title.
 */
@property (nonatomic,strong)NSString *cancelButtonTitle;

/*
 * Default is System Font of size 15.
 * Use this property if you need to customize cancel button title font.
 */
@property (nonatomic,strong)UIFont *cancelButtonFont;

/**
 * Default is Blue color.
 * The property can be used to change the color of Progress Bar.
 **/
@property (nonatomic,strong)UIColor *progressBarColor;

/**
 * Default is Blue color.
 * The property can be used to change the color of Navigation Bar appearing on A2ISurveyViewController.
 * You just need to pass UIColor from your controller.
 **/
@property (nonatomic,strong)UIColor *navigationBarColor;

/**
 * Default is "A2ISurvey".
 * The property can be used to change the Title of controller appearing on A2ISurveyViewController Navigation Bar
 **/
@property (nonatomic,strong)NSString *navTitle;

/**
 * Use this property if you need to customize Navigation Bar title font.
 **/
@property (nonatomic,strong)UIFont *navTitleFont;

/**
 * Default is Black color.
 * The property can be used to change the color of Navigation Title appearing on A2ISurveyViewController
 * You just need to pass UIColor from your controller
 **/
@property (nonatomic,strong)UIColor *navTitleColor;

/**
 * Default is Refresh.
 * Use this property to customize title for Refresh Button.
 **/
@property (nonatomic,strong)NSString *refreshButtonTitle;

/**
 * Default is System Font of size 15.
 * Use this property if you need to customize Refresh button title font.
 **/
@property (nonatomic,strong)UIFont *refreshButtonFont;

/**
 * Default is Blue color.
 * The property can be used to change the color of cancel button appearing on A2ISurveyViewController
 * You just need to pass UIColor from your controller
 **/
@property (nonatomic,strong)UIColor *refreshButtonColor;

/**
 * Default is "A2ISurveySDK".
 * Use this property to customie all the alert title appearing in this A2ISurveyViewController.
 **/
@property (nonatomic,strong)NSString *alertTitle;

/**
 * Set icon instead of title on Cancel button of your A2ISurveyViewController.
 * @param img The UIImage which you would like to set on the Cancel button.
 * Once you set icon, the Cancel button title will no longer be visible.
 **/
-(void)setIconForCancelButton:(UIImage *)img;

/**
 * Set icon instead of title on Refresh button of your A2ISurveyViewController.
 * @param img The UIImage which you would like to set on the Refresh button.
 * Once you set icon, the Refresh button title will no longer be visible.
 **/
-(void)setIconForRefreshButton:(UIImage *)img;

/**
 * By default Refresh button is visible.
 * Use this method to hide Refresh Button
 **/
-(void)hideRefreshButton;

/**
 *  Display the intercept UIAlertView to the user - asking them to give feedback on your app.
 *  By default, the UIAlertView prompt will display 3 days after app install. If the user declines to take the survey, they will be prompted again in 3 weeks.
 *  If the user consents to take the survey, they'll be prompted again in 3 months.
 *
 *  @param viewController The view controller from which to launch the A2ISurveyViewController
 *  @param alertTitle The title of your app -- used in the title of the UIAlertView
 *  @param alertBody alert message -- used in the alert of the UIAlertView
 *  @param positiveActionTitle The title of the positive action button on the UIAlertView prompt
 *  @param cancelTitle The title of the cancel button on the UIAlertView prompt
 
 */
-(void)scheduleInterceptFromViewController:(UIViewController *)viewController
                                alertTitle:(NSString*)alertTitle
                                 alertBody:(NSString*)alertBody
                       positiveActionTitle:(NSString*) positiveActionTitle
                               cancelTitle:(NSString*) cancelTitle;

/**
 *  Display the intercept UIAlertView to the user - asking them to give feedback on your app.
 *  Supply an alert title and body for the UIAlertView prompt, as well as time intervals (in seconds) to wait before displaying the prompt (i.e. after app install, after consents to take the survey, and after the user declines to take the survey)
 *
 *  @param viewController The view controller from which to launch the A2ISurveyViewController
 *  @param alertTitle The title of the UIAlertView prompt
 *  @param alertBody The body of the UIAlertView prompt
 *  @param positiveActionTitle The title of the positive action button on the UIAlertView prompt
 *  @param cancelTitle The title of the cancel button on the UIAlertView prompt
 *  @param afterInstallInterval The amount of time (in seconds) to delay before first prompting the user to give feedback after they install your app.
 *  @param afterAcceptInterval The amount of time (in seconds) to wait before prompting the user to give feedback again after they consent to take your survey.
 *  @param afterDeclineInterval The amount of time (in seconds) to wait before prompting the user to give feedback again after they decline to take your survey.
 */
-(void)scheduleInterceptFromViewController:(UIViewController *)viewController
                                alertTitle:(NSString*)alertTitle
                                 alertBody:(NSString*)alertBody
                       positiveActionTitle:(NSString*)positiveActionTitle
                               cancelTitle:(NSString*)cancelTitle
                      afterInstallInterval:(double)afterInstallInterval afterAcceptInterval:(double)afterAcceptInterval afterDeclineInterval:(double)afterDeclineInterval;


/**
 *  Display the A2ISurveyViewController to the user.
 *
 *  @param viewController The view controller from which to launch the A2IDashboardViewController
 *  @param flag Pass YES to animate the presentation; otherwise, pass NO.
 *  @param completion The block to execute after the presentation finishes. This block has no return value and takes no parameters. You may specify nil for this parameter.
 */
-(void)presentFromViewController:(UIViewController *)viewController
                        animated: (BOOL)flag
                      completion:(void (^)(void))completion;

@property (nonatomic,weak)id<A2ISurveyDelegate>delegate;

@end
