//
//  EPlatform.h
//  Empty
//
//  Created by user on 2017/11/8.
//  Copyright © 2017年 Empty. All rights reserved.
//
#import <UIKit/UIKit.h>

//Empty相关回调接口， 游戏层在初始化的时候， 传入该delegate
@protocol EPlatformDelegate<NSObject>

-(void) OnInitSuccess;
-(void) OnInitFailed:(NSString*)msg;
-(void) OnLoginFailed:(NSString*)msg;
-(void) OnLoginSuccess:(NSDictionary*)result;


-(void) OnLogoutSuccess;
-(void) OnLogoutFailed:(NSString*)msg;
-(void) OnPaySuccess:(NSString*)msg;
-(void) OnPayFailed:(NSString*)msg;
@end

typedef NS_ENUM(NSInteger, EmptyStateCode)
{
    ES_NONE = 1,
    ES_INITING,
    ES_INITED,
    ES_LOGINING,
    ES_LOGINED
};

@interface EPlatform : NSObject
@property (nonatomic,assign) NSString *isThirdPartylogin;
@property (nonatomic,strong) NSDictionary  *sdkconfigDict;
@property (nonatomic,strong) NSDictionary  *ADVERTDict;

@property id<EPlatformDelegate> delegate;

+(EPlatform*) sharedInstance;

-(void)initWithAppId:(NSString*)appId appKey:(NSString*)appKey delegate:(id<EPlatformDelegate>)delegate;

-(void)initWithGameAppId:(NSString *)appId subMasterId:(NSString *)masterId realNameType:(NSString *)realNameType   Channel:(NSString *)Channel  delegate:(id<EPlatformDelegate>)delegate;

-(void)login:(UIViewController*)viewController;

-(void)logout;
-(void)logins;



- (void)startRealName:(BOOL) force block:(void(^)(BOOL isRealName ,int age))block;

-(void)queryRealNameInfo:(void(^)(BOOL isRealName ,int age))block;

- (void)applicationDidBecomeActive:(UIApplication *)application;

- (void)applicationWillResignActive:(UIApplication *)application;



-(void)exitApplication;

@end
