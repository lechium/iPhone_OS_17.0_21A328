//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUDayRowViewModel, NSArray, NSString;
@protocol MULabelViewProtocol;

__attribute__((visibility("hidden")))
@interface MUDayRowView : UIView
{
    UIView<MULabelViewProtocol> *_headerLabel;	// 8 = 0x8
    UIView<MULabelViewProtocol> *_dayLabel;	// 16 = 0x10
    UIView<MULabelViewProtocol> *_hoursLabel;	// 24 = 0x18
    NSArray *_hoursConstraints;	// 32 = 0x20
    _Bool _stacked;	// 40 = 0x28
    MUDayRowViewModel *_viewModel;	// 48 = 0x30
}

+ (id)_hoursMonospacedFont;	// IMP=0x001000000010113e
- (void).cxx_destruct;	// IMP=0x0000000000102486
@property(retain, nonatomic) MUDayRowViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic, getter=isStacked) _Bool stacked; // @synthesize stacked=_stacked;
- (_Bool)shouldStackForProposedWidth:(double)arg1;	// IMP=0x00000000001022f6
- (void)_refreshHoursLabel;	// IMP=0x0000000000102297
- (void)_updateFonts;	// IMP=0x00000000001021d4
- (void)_updateAppearance;	// IMP=0x000000000010211d
- (id)_createHoursConstraints;	// IMP=0x0000000000101aef
- (void)_setupConstraints;	// IMP=0x00000000001016ee
- (void)_setupSubviews;	// IMP=0x0000000000101358
- (id)initWithViewModel:(id)arg1;	// IMP=0x0000000000101291

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

