/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject  {
    id _attr;
    id _value;
    unsigned long long _count;
    void *_reserved;
}

@property(copy,readonly) NSString * attribute;
@property(retain,readonly) id value;
@property(readonly) unsigned long long count;


- (id)value;
- (unsigned long long)count;
- (void)dealloc;
- (id)attribute;
- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4;

@end
