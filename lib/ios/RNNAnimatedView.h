#import <UIKit/UIKit.h>
#import "RNNViewLocation.h"

@interface RNNAnimatedView : UIView


@property (nonatomic, strong) RNNViewLocation* location;
@property (nonatomic, strong) UIView* reactView;

- (instancetype)initElement:(UIView*)element toElement:(UIView *)toElement alpha:(CGFloat)alpha endAlpha:(CGFloat)endAlpha isSharedElement:(BOOL)isSharedElement;

- (void)setAnimatedViewFinalProperties;

@end
