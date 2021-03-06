/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface PDHeadersFooters : NSObject  {
    boolmHasDateTime;
    boolmHasNowDateTime;
    boolmHasUserDateTime;
    boolmHasSlideNumber;
    boolmHasHeader;
    boolmHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}


- (void)setFooter:(id)arg1;
- (id)footer;
- (void)setUserDateTime:(id)arg1;
- (id)userDateTime;
- (void)setHasFooter:(bool)arg1;
- (bool)hasFooter;
- (void)setHasHeader:(bool)arg1;
- (void)setHasSlideNumber:(bool)arg1;
- (bool)hasSlideNumber;
- (void)setHasUserDateTime:(bool)arg1;
- (bool)hasUserDateTime;
- (void)setHasNowDateTime:(bool)arg1;
- (bool)hasNowDateTime;
- (void)setHasDateTime:(bool)arg1;
- (bool)hasDateTime;
- (bool)hasHeader;
- (void)setHeader:(id)arg1;
- (void)dealloc;
- (id)header;

@end
