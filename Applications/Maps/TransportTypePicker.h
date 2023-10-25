//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, NSString, UISegmentedControl, UIStackView;
@protocol TransportTypePickerDelegate;

@interface TransportTypePicker : UIView
{
    id _featureBlockListener;	// 8 = 0x8
    id _authBlockListener;	// 16 = 0x10
    NSArray *_types;	// 24 = 0x18
    id <TransportTypePickerDelegate> _delegate;	// 32 = 0x20
    long long _selectedType;	// 40 = 0x28
    NSMutableArray *_segments;	// 48 = 0x30
    UIStackView *_segmentStackView;	// 56 = 0x38
    UISegmentedControl *_segmentedControl;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000a78f3c
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(readonly, nonatomic) UIStackView *segmentStackView; // @synthesize segmentStackView=_segmentStackView;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) long long selectedType; // @synthesize selectedType=_selectedType;
@property(nonatomic) __weak id <TransportTypePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateSegmentsForSelectedTransportType:(long long)arg1;	// IMP=0x0010000000a78ca1
- (void)_didSelectType:(long long)arg1;	// IMP=0x0010000000a78c43
- (void)_didSelectSegmentInControl:(id)arg1;	// IMP=0x0010000000a78ba4
- (void)_didSelectSegment:(id)arg1;	// IMP=0x0010000000a78b70
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0010000000a78989
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x0010000000a787f0
- (id)accessibilityElements;	// IMP=0x0010000000a787de
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000a786c8
- (void)offlineStatusChanged:(id)arg1;	// IMP=0x0010000000a78690
- (id)_types;	// IMP=0x0010000000a78571
@property(readonly, nonatomic) NSArray *types; // @synthesize types=_types;
- (void)_updateSubviews;	// IMP=0x0010000000a77b17
- (void)_customInit;	// IMP=0x0010000000a7795c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000a77910
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000a778b3
- (void)dealloc;	// IMP=0x0010000000a77836

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
