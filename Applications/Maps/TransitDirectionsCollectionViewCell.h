//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TransitDirectionsListItem, TransitDirectionsStepView, UIView;

@interface TransitDirectionsCollectionViewCell
{
    TransitDirectionsStepView *_stepView;	// 8 = 0x8
}

+ (Class)stepViewClass;	// IMP=0x00200000007866dd
+ (Class)_contentViewClass;	// IMP=0x00100000007866cb
- (void).cxx_destruct;	// IMP=0x0020000000786a75
@property(readonly, nonatomic) TransitDirectionsStepView *stepView; // @synthesize stepView=_stepView;
@property(retain, nonatomic) UIView *trailingView;
@property(nonatomic) double leadingInstructionMargin;
@property(nonatomic) unsigned long long displayOptions;
@property(nonatomic) long long navigationState;
@property(nonatomic) _Bool useNavigationMetrics;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00100000007868d2
- (void)prepareForReuse;	// IMP=0x0010000000786886
- (void)configureWithItem:(id)arg1;	// IMP=0x0010000000786869
@property(readonly, nonatomic) TransitDirectionsListItem *transitListItem;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007866fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

