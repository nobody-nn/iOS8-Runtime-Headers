/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class PDAnimateRotateBehavior, PDAnimateScaleBehavior, PDAudioNode, PDVideoNode, PDAnimateEffectBehavior, PDAnimateMotionBehavior, PDAnimateColorBehavior, PDAnimateTimeBehavior, PDSequentialTimeNode, PDCmdBehavior, PDParallelTimeNode, PDSetBehavior;

@interface PDTimeNodeUnion : NSObject  {
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}


- (id)sequential;
- (id)parallel;
- (id)video;
- (id)audio;
- (id)commonBehavior;
- (void)setCmdBehavior:(id)arg1;
- (void)setRotateBehavior:(id)arg1;
- (void)setMotionBehavior:(id)arg1;
- (void)setEffectBehavior:(id)arg1;
- (void)setColorBehavior:(id)arg1;
- (void)setTimeBehavior:(id)arg1;
- (void)setAudio:(id)arg1;
- (void)setParallel:(id)arg1;
- (id)cmdBehavior;
- (id)rotateBehavior;
- (id)motionBehavior;
- (id)effectBehavior;
- (id)colorBehavior;
- (id)timeBehavior;
- (id)scaleBehavior;
- (void)setScaleBehavior:(id)arg1;
- (void)setSequential:(id)arg1;
- (void)setBehavior:(id)arg1;
- (id)behavior;
- (id)init;
- (void)dealloc;
- (void)setVideo:(id)arg1;

@end