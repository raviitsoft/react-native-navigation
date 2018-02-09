#import <UIKit/UIKit.h>
#import <React/RCTBridge.h>
#import "RCCManager.h"
#import "RCTHelpers.h"

@interface RCCTabBarController : UITabBarController <UITabBarDelegate>

- (instancetype)initWithProps:(NSDictionary *)props children:(NSArray *)children globalProps:(NSDictionary*)globalProps bridge:(RCTBridge *)bridge;
- (void)performAction:(NSString*)performAction actionParams:(NSDictionary*)actionParams bridge:(RCTBridge *)bridge completion:(void (^)(void))completion;

@property (nonatomic) BOOL tabBarHidden;
@property (nonatomic, retain) RCTRootView *overlayView;

@end
