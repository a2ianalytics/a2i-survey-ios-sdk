//
//  DashboardViewController.h
//  A2IDashboardFramework
//
//  Copyright © 2017 A2I. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol A2IDashboardDelegate <NSObject>
/*
 * Use this delegate if you want to perform some action when A2IDashboardViewController is dismissed.
 */
-(void)A2IDashboardViewControllerDidDismissed;
@end

@interface A2IDashboardViewController : UIViewController
+(id)initialize;

/**
 * Pass the Dashboard Id using this property.
 * Dashboard Id is mandatory for Dashboard.
 * You wont be able to use this SDK until and unless you have the Dashboard Id.
 **/
@property (nonatomic,strong)NSString *dashboard_id;

/**
 * The property can be used to change the color of cancel button appearing on A2IDashboardViewController
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
 * The property can be used to change the color of Navigation Bar appearing on A2IDashboardViewController.
 * You just need to pass UIColor from your controller.
 **/
@property (nonatomic,strong)UIColor *navigationBarColor;

/**
 * Default is "A2IDashboard".
 * The property can be used to change the Title of controller appearing on A2IDashboardViewController Navigation Bar
 **/
@property (nonatomic,strong)NSString *navTitle;

/**
 * Use this property if you need to customize Navigation Bar title font.
 **/
@property (nonatomic,strong)UIFont *navTitleFont;

/**
 * Default is Black color.
 * The property can be used to change the color of Navigation Title appearing on A2IDashboardViewController
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
 * The property can be used to change the color of cancel button appearing on A2IDashboardViewController
 * You just need to pass UIColor from your controller
 **/
@property (nonatomic,strong)UIColor *refreshButtonColor;

/**
 * Default is "A2IDashboardSDK".
 * Use this property to customie all the alert title appearing in this A2IDashboardViewController.
 **/
@property (nonatomic,strong)NSString *alertTitle;

/**
 * Set icon instead of title on Cancel button of your A2IDashboardViewController.
 * @param img The UIImage which you would like to set on the Cancel button.
 * Once you set icon, the Cancel button title will no longer be visible.
 **/
-(void)setIconForCancelButton:(UIImage *)img;

/**
 * Set icon instead of title on Refresh button of your A2IDashboardViewController.
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
 *  Display the A2IDashboardViewController to the user.
 *
 *  @param viewController The view controller from which to launch the A2IDashboardViewController
 *  @param flag Pass YES to animate the presentation; otherwise, pass NO.
 *  @param completion The block to execute after the presentation finishes. This block has no return value and takes no parameters. You may specify nil for this parameter.
 */
-(void)presentFromViewController:(UIViewController *)viewController
                        animated: (BOOL)flag
                      completion:(void (^)(void))completion;

@property (nonatomic,weak)id<A2IDashboardDelegate>delegate;

@end
