//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;

__attribute__((visibility("hidden")))
@interface _UITextFieldViewBackgroundProvider
{
}

- (void)_buildDescription:(id)arg1;	// IMP=0x00000000007f98b1
- (void)setNeedsDisplay;	// IMP=0x00000000007f9844
- (void)populateArchivedSubviews:(id)arg1;	// IMP=0x00000000007f97b6
- (void)removeFromTextField;	// IMP=0x00000000007f974b
- (void)addToTextField:(id)arg1;	// IMP=0x00000000007f967b
- (_Bool)hitTestView:(id)arg1;	// IMP=0x00000000007f960a
- (id)overridingSetBackgroundColor:(id)arg1;	// IMP=0x00000000007f95a7
@property(readonly, nonatomic) UIView *backgroundView;
- (void)didChangeFirstResponder;	// IMP=0x00000000007f94e2
- (void)layoutIfNeeded;	// IMP=0x00000000007f93d6

@end
