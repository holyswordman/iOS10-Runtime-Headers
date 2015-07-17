/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface PLCameraIrisAnimationView : UIView {
    id irisAnimationDelegate;
    SEL irisAnimationDidStopSelector;
    double irisAnimationDuration;
    struct CGPoint { 
        float x; 
        float y; 
    } irisAnimationPosition;
    BOOL shouldSetupAnimationInDidMoveToWindow;
}

@property (nonatomic) id irisAnimationDelegate;
@property (nonatomic) SEL irisAnimationDidStopSelector;
@property (nonatomic) double irisAnimationDuration;
@property (nonatomic) struct CGPoint { float x1; float x2; } irisAnimationPosition;
@property (nonatomic) BOOL shouldSetupAnimationInDidMoveToWindow;

- (void)animateIrisOpen;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)irisAnimationDelegate;
- (SEL)irisAnimationDidStopSelector;
- (double)irisAnimationDuration;
- (struct CGPoint { float x1; float x2; })irisAnimationPosition;
- (void)pauseIrisAnimation;
- (void)setIrisAnimationDelegate:(id)arg1;
- (void)setIrisAnimationDidStopSelector:(SEL)arg1;
- (void)setIrisAnimationDuration:(double)arg1;
- (void)setIrisAnimationPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setShouldSetupAnimationInDidMoveToWindow:(BOOL)arg1;
- (void)setupAnimation;
- (BOOL)shouldSetupAnimationInDidMoveToWindow;
- (void)unpauseIrisAnimation;

@end