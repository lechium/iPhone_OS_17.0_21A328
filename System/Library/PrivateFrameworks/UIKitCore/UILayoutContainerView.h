//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@protocol UILayoutContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface UILayoutContainerView : UIView
{
    UIView *_shadowView;	// 128 = 0x80
    struct {
        unsigned int delegateRespondsToSemanticContentAttributeChanged:1;
        unsigned int delegateRespondsToViewWillLayoutSubviews:1;
        unsigned int delegateRespondsToWillMoveToWindow:1;
        unsigned int delegateRespondsToDidMoveToWindow:1;
    } _layoutContainerViewFlags;	// 136 = 0x88
    _Bool _usesInnerShadow;	// 140 = 0x8c
    _Bool _usesRoundedCorners;	// 141 = 0x8d
    id <UILayoutContainerViewDelegate> _delegate;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000005120f2
@property(nonatomic) _Bool usesRoundedCorners; // @synthesize usesRoundedCorners=_usesRoundedCorners;
@property(nonatomic) _Bool usesInnerShadow; // @synthesize usesInnerShadow=_usesInnerShadow;
@property(nonatomic) __weak id <UILayoutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x0000000000512024
- (void)dealloc;	// IMP=0x0000000000511fe6
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x0000000000511f76
- (void)addSubview:(id)arg1;	// IMP=0x0000000000511f20
- (void)_tearDownShadowViews;	// IMP=0x0000000000511ee8
- (void)_installShadowViews;	// IMP=0x0000000000511954
- (void)_updateShadowViews;	// IMP=0x000000000051191c
- (void)didMoveToWindow;	// IMP=0x0000000000511756
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000005116e1
- (void)layoutSubviews;	// IMP=0x00000000005115dc
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000051150a
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000051142e
- (void)_setFlagsFromDelegate:(id)arg1;	// IMP=0x0000000000511372
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000511271
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005111c0

@end

