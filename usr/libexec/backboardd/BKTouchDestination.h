//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKDigitizerTouchStreamClient, NSHashTable;

@interface BKTouchDestination
{
    NSHashTable *_externalReferences;	// 8 = 0x8
    unsigned long long _predicate;	// 16 = 0x10
    BKDigitizerTouchStreamClient *_touchStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000094c6f
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000094c16
- (void)appendSuccinctDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000094adb
- (id)description;	// IMP=0x0010000000094abf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000094a45

@end

