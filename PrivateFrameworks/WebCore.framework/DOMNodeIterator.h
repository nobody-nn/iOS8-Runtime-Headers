/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMNode, <DOMNodeFilter>;

@interface DOMNodeIterator : DOMObject  {
}

@property(readonly) DOMNode * root;
@property(readonly) unsigned int whatToShow;
@property(readonly) <DOMNodeFilter> * filter;
@property(readonly) bool expandEntityReferences;
@property(readonly) DOMNode * referenceNode;
@property(readonly) bool pointerBeforeReferenceNode;


- (id)previousNode;
- (bool)pointerBeforeReferenceNode;
- (id)referenceNode;
- (bool)expandEntityReferences;
- (unsigned int)whatToShow;
- (id)root;
- (void)detach;
- (id)filter;
- (void)finalize;
- (void)dealloc;
- (id)nextNode;

@end
