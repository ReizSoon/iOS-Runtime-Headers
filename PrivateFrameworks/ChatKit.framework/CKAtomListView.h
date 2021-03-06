/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKLabelledAtomList, NSArray, UIButton, UILabel;

@interface CKAtomListView : UIView <MFLabelledAtomListDelegate> {
    unsigned int _expanded : 1;
    NSArray *_addresses;
    NSArray *_arePhoneNumbers;
    CKLabelledAtomList *_atomList;
    id _delegate;
    UIButton *_detailsButton;
    UIButton *_hideDetailsButton;
    UILabel *_recipientListLabel;
    int _style;
}

- (void)_buttonTouchUpEvent:(id)arg1;
- (id)_newButtonWithTitle:(id)arg1;
- (void)_updateAlphasAnimating:(BOOL)arg1;
- (void)_updateHeight;
- (void)_updateInactiveModeText;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (void)displayStringsDidChangeForLabelledAtomList:(id)arg1;
- (id)initWithLabel:(id)arg1 totalWidth:(float)arg2 addresses:(id)arg3 arePhoneNumbers:(id)arg4 style:(int)arg5;
- (BOOL)isExpanded;
- (void)layoutSubviews;
- (void)setAddressAtomTarget:(id)arg1 action:(SEL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
