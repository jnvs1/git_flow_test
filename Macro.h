//
//  Macro.h
//  KBang-iOS-User
//
//  Created by ljx on 16/2/18.
//
//

//测试环境
#define KRequestAPI_URL  @"http://210.21.222.138:9091"
#define RONGCLOUD_IM_APPKEY @"uwd1c0sxdb151"

//真实环境
//#define KRequestAPI_URL  @"http://customer.kbang.com"
//#define RONGCLOUD_IM_APPKEY @"8luwapkvuzw4l"

#define IPHONEWIDHT    [[UIScreen mainScreen] bounds].size.width
#define IPHONEHEIGHT   [[UIScreen mainScreen] bounds].size.height

#define SINGLE_LINE_1PX          (1 / [UIScreen mainScreen].scale)

#define KBBackgroundColor [UIColor colorWithHexString:@"#eff4f7" alpha:1]

#define KBNavigationBarColor [UIColor colorWithHexString:@"#232730" alpha:1.0]

#define KBImageViewDefaultColor [UIColor colorWithHexString:@"#d2d2d2" alpha:1]

#define KBTextColorHex1A9EF2 [UIColor colorWithHexString:@"#1A9EF2" alpha:1.0]
#define KBTextColorHex333333 [UIColor colorWithHexString:@"#333333" alpha:1.0]
#define KBTextColorHex747474 [UIColor colorWithHexString:@"#747474" alpha:1]
#define KBTextColorHexB5B8BE [UIColor colorWithHexString:@"#b5b8be" alpha:1]
#define KBLineColor [UIColor colorWithHexString:@"#dddddd" alpha:1]
#define KBTextColorHexFFC108 [UIColor colorWithHexString:@"#ffc108" alpha:1]

#define KBLineColor [UIColor colorWithHexString:@"#dddddd" alpha:1]

#define kGlobal [Global sharedInstance]
#define kCommon [Common sharedInstance]
#define kDatabaseManager [DatabaseManager sharedInstance]
#define kNetworkManager [NetworkManager sharedInstance]
#define kCacheManager [CacheManager sharedInstance]

#define kSystemVerson [UIDevice currentDevice].systemVersion

#define KBImagePrefix  [[NSUserDefaults standardUserDefaults]valueForKey:@"kbImagePrefix"]
#define KBPlaceholderImage [UIImage imageNamed:@"morentupian"]

#define KBHomeViewShowCommunityNameCacheString @"homeViewCommunityShow"
#define KBSelectedCommunity   [[NSUserDefaults standardUserDefaults] valueForKey:@"selectdCommunityName"]
#define KBSelectedCommunityId [[NSUserDefaults standardUserDefaults] valueForKey:@"selectdCommunityId"]
#define KBSelectedCommunityNotice [[NSUserDefaults standardUserDefaults]valueForKey:@"selectedCommunityNotice"]

#define KBCurrentDistrictId userDefaultsValueForKey(kUDKeyCurrentDistrictId)
#define KBCurrentDistrictName userDefaultsValueForKey(kUDKeyCurrentDistrictName)
#define KBCurrentCountyId userDefaultsValueForKey(kUDKeyCurrentCountyId)
#define KBCurrentProvinceId [KBCurrentCountyId substringToIndex:4]
#define KBCurrentCityId [KBCurrentCountyId substringToIndex:8]

#define KBSelectedShopId      [[NSUserDefaults standardUserDefaults]valueForKey:@"FPShopId"]

#define KBBageChangedNotice   [[NSNotificationCenter defaultCenter]postNotification:[[NSNotification alloc]initWithName:@"bageChanged" object:nil userInfo:nil]]

#define KBServiceNotice       [[NSNotificationCenter defaultCenter]postNotification:[[NSNotification alloc]initWithName:@"serviceChanged" object:nil userInfo:nil]]

#if DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"\nfunction:%s line:%d content:%s\n", __FUNCTION__, __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define NSLog(FORMAT, ...) nil
#endif
