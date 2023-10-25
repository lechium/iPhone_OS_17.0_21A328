//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TLKStackView.h"

@class NSMutableArray, TLKLabel;

__attribute__((visibility("hidden")))
@interface TLKContentsView : TLKStackView
{
    TLKLabel *_titleLabel;	// 8 = 0x8
    NSMutableArray *_detailsLabels;	// 16 = 0x10
}

+ (id)detailsLabel;	// IMP=0x006000000002ae61
- (void).cxx_destruct;	// IMP=0x000000000002b3a9
@property(retain, nonatomic) NSMutableArray *detailsLabels; // @synthesize detailsLabels=_detailsLabels;
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithTitle:(id)arg1 contents:(id)arg2;	// IMP=0x000000000002aed7
- (id)init;	// IMP=0x000000000002ad4d

@end
