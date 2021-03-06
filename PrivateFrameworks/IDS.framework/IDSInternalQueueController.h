/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSObject<OS_dispatch_queue>;

@interface IDSInternalQueueController : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)assertQueueIsCurrent;
- (void)performBlock:(id)arg1 waitUntilDone:(bool)arg2;
- (void)assertQueueIsNotCurrent;
- (void)performBlock:(id)arg1;
- (id)queue;
- (id)init;
- (void)dealloc;

@end
