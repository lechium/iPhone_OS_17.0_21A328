//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet
{
    CHDChart *mMainChart;	// 112 = 0x70
    _Bool mIsBoundsSet;	// 120 = 0x78
    struct CGRect mBounds;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000039ff82
- (void)addDrawable:(id)arg1;	// IMP=0x000000000018c8e2
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000016b80b
- (struct CGRect)bounds;	// IMP=0x00000000001855fa
- (_Bool)areBoundsSet;	// IMP=0x00000000001855ea
- (void)setMainChart:(id)arg1;	// IMP=0x0000000000180353
- (id)mainChart;	// IMP=0x0000000000185861
- (void)teardown;	// IMP=0x000000000018d36e

@end

