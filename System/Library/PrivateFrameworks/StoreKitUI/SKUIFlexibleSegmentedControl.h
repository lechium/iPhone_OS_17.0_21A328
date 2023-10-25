//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UISegmentedControl;
@protocol SKUIFlexibleSegmentedControlDelegate;

__attribute__((visibility("hidden")))
@interface SKUIFlexibleSegmentedControl : UIView
{
    id <SKUIFlexibleSegmentedControlDelegate> _delegate;	// 8 = 0x8
    double _desiredSegmentWidth;	// 16 = 0x10
    _Bool _isMoreListSelected;	// 24 = 0x18
    NSArray *_itemTitles;	// 32 = 0x20
    long long _maximumNumberOfVisibleItems;	// 40 = 0x28
    NSString *_moreListTitle;	// 48 = 0x30
    long long _previousSelectedSegmentIndex;	// 56 = 0x38
    UISegmentedControl *_segmentedControl;	// 64 = 0x40
    long long _selectedSegmentIndex;	// 72 = 0x48
    _Bool _sizesSegmentsToFitWidth;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000020226b
@property(nonatomic) _Bool sizesSegmentsToFitWidth; // @synthesize sizesSegmentsToFitWidth=_sizesSegmentsToFitWidth;
@property(copy, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(nonatomic) long long maximumNumberOfVisibleItems; // @synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems;
@property(copy, nonatomic) NSArray *itemTitles; // @synthesize itemTitles=_itemTitles;
@property(nonatomic) double desiredSegmentWidth; // @synthesize desiredSegmentWidth=_desiredSegmentWidth;
@property(nonatomic) __weak id <SKUIFlexibleSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setTitles:(id)arg1 forSegmentedControl:(id)arg2;	// IMP=0x0000000000202110
- (void)_configureSegmentedControl:(id)arg1 withTitles:(id)arg2 boundingSize:(struct CGSize)arg3;	// IMP=0x0000000000201cea
- (void)_valueChangeAction:(id)arg1;	// IMP=0x0000000000201b6b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000201ab2
- (void)layoutSubviews;	// IMP=0x00000000002018c8
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
@property(readonly, nonatomic) long long moreListIndex;
- (struct CGRect)frameForSegmentWithIndex:(long long)arg1;	// IMP=0x0000000000201567
- (void)cancelMoreList;	// IMP=0x000000000020152c
- (void)dealloc;	// IMP=0x00000000002014d8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000201398

@end
