//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, OISFUZipArchive;

__attribute__((visibility("hidden")))
@interface OCPZipPackage
{
    OISFUZipArchive *mArchive;	// 40 = 0x28
    NSMutableDictionary *mParts;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000003701c2
- (void)resetPartForLocation:(id)arg1;	// IMP=0x00000000001c00aa
- (id)partForLocation:(id)arg1;	// IMP=0x0000000000192958
- (id)initWithData:(id)arg1;	// IMP=0x0000000000190f84
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000370080
- (id)initWithArchive:(id)arg1;	// IMP=0x00000000001910c3

@end
