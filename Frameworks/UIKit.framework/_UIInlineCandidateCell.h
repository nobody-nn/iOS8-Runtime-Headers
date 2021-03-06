/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface _UIInlineCandidateCell : UIView  {
    NSString *_candidate;
    unsigned long long _index;
    UIFont *_font;
    struct CGSize { 
        double width; 
        double height; 
    } _stringImageSize;
    bool_highlighted;
    id _target;
    SEL _action;
    bool_lastItem;
    bool_dontDrawRightEdge;
}


- (unsigned long long)index;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)dontDrawRightEdge:(bool)arg1;
- (void)setLastItem:(bool)arg1;
- (struct CGSize { double x1; double x2; })stringImageSize;
- (id)initWithCandidate:(id)arg1 andIndex:(unsigned long long)arg2 withFontSize:(double)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)setHighlighted:(bool)arg1;

@end
