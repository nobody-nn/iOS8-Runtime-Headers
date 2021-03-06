/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class ISPurchaseReceipt, NSDate;

@interface SSPurchaseReceipt : NSObject  {
    ISPurchaseReceipt *_purchaseReceipt;
}

@property(readonly) bool isVPPLicensed;
@property(readonly) bool isRevoked;
@property(readonly) NSDate * expirationDate;

+ (void)getReceiptPathWithCompletionBlock:(id)arg1;

- (id)initWithContainerPath:(id)arg1;
- (bool)isVPPLicensed;
- (id)expirationDate;
- (id)initWithContentsOfFile:(id)arg1;
- (void).cxx_destruct;
- (bool)isRevoked;

@end
