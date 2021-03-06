//
//  OAuthLoginViewController.h
//  ExamMobile
//
//  Created by lmj on 15-10-31.
//  Copyright (c) 2015年 lmj. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol OAuthLoginViewControllerDelegate;
@interface OAuthLoginViewController : UIViewController<UIWebViewDelegate>
/*!
 *  登录地址
 */
@property(nonatomic,strong) NSString *loginURL;
/*!
 *  匹配地址，匹配到表示获取code
 */
@property(nonatomic,strong) NSString *matchURL;
@property(nonatomic,strong) NSString *loginTitle;
@property(nonatomic,assign) id<OAuthLoginViewControllerDelegate> delegate;
-(void)start;
@end

@protocol OAuthLoginViewControllerDelegate <NSObject>

@optional
-(void)OAuthLoginViewController:(OAuthLoginViewController *)vc success:(BOOL)success;
-(void)OAuthLoginViewController:(OAuthLoginViewController *)vc codeUrl:(NSString *)url;
@end