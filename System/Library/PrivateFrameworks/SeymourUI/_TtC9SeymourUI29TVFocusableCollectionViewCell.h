//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI29TVFocusableCollectionViewCell : UICollectionViewCell
{
    MISSING_TYPE *underlyingControlState;	// 8 = 0x8
}

- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000549480
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000549420
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000000549380
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000549310
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000549060
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000549040
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000548f00
- (void)prepareForReuse;	// IMP=0x0000000000548e40
@property(nonatomic, readonly) _Bool canBecomeFocused;

@end
