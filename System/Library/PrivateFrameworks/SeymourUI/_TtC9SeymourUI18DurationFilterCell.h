//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI18DurationFilterCell : UICollectionViewCell
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *itemInfo;	// 24 = 0x18
    MISSING_TYPE *tickView;	// 65536 = 0x10000
    MISSING_TYPE *durationLabel;	// 1937330991 = 0x7379532f
    MISSING_TYPE *minLabel;	// 1919052108 = 0x7262694c
    MISSING_TYPE *layout;	// 1986622032 = 0x76697250
    MISSING_TYPE *labelLayoutGuide;	// 1701667186 = 0x656d6172
    MISSING_TYPE *unitsVerticalConstraint;	// 1850683251 = 0x6e4f2f73
}

- (void).cxx_destruct;	// IMP=0x000000000053d040
- (void)textSizeChanged:(id)arg1;	// IMP=0x000000000053cf60
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000053cd70
- (void)prepareForReuse;	// IMP=0x000000000053cc90
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000053cc70
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000053cc40
@property(nonatomic, readonly) UILabel *durationLabel; // @synthesize durationLabel;

@end

