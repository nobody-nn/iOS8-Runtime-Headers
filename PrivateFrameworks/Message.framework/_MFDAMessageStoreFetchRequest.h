/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessage, MFDAMessageStore, MFMimePart, <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory>;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest> {
    <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> *consumer;
    MFDAMessageStore *store;
    MFMessage *message;
    MFMimePart *part;
    int format;
    boolpartial;
}

@property(readonly) bool shouldSend;
@property(readonly) bool isUserRequested;


- (bool)shouldSend;
- (id)deferredOperation;
- (bool)isUserRequested;
- (unsigned long long)generationNumber;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
