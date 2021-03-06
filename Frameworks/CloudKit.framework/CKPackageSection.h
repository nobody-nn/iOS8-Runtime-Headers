/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSData;

@interface CKPackageSection : NSObject  {
    long long _index;
    NSData *_signature;
    long long _size;
}

@property(readonly) long long index;
@property(readonly) NSData * signature;
@property long long size;


- (id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(long long)arg3;
- (id)CKPropertiesDescription;
- (long long)index;
- (void)setSize:(long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (long long)size;
- (id)signature;

@end
