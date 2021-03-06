/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class NSString, <SBUIBannerTargetImplementation>;

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget> {
    void *_identifier;
    long long _idiom;
    <SBUIBannerTargetImplementation> *_implementation;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) void* bannerTargetIdentifier;
@property(readonly) long long bannerTargetIdiom;


- (id)initWithTargetImplementation:(id)arg1;
- (void)removeCachedBannerForContext:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(id)arg2;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)signalSource:(id)arg1;
- (bool)isShowingModalBanner;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)registerSource:(id)arg1;
- (long long)bannerTargetIdiom;
- (void*)bannerTargetIdentifier;
- (void)invalidate;
- (id)description;

@end
