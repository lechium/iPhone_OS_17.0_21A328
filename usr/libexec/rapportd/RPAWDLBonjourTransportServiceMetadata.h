//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RPAWDLBonjourTransportServiceMetadata
{
    _Bool _isSingleBandModeRequired;	// 16 = 0x10
}

@property(readonly, nonatomic) _Bool isSingleBandModeRequired; // @synthesize isSingleBandModeRequired=_isSingleBandModeRequired;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000063e38
- (id)dictionaryRepresentation;	// IMP=0x0010000000063d8f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000063c7d
- (id)initWithSingleBandModeRequired:(_Bool)arg1;	// IMP=0x0010000000063c19

@end
