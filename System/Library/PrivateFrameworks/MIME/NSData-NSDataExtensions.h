//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (NSDataExtensions)
- (_Bool)mf_immutable;	// IMP=0x007000000001219e
- (id)mf_subdataWithRange:(struct _NSRange)arg1;	// IMP=0x007000000001210c
- (id)mf_encodeBase64HeaderData;	// IMP=0x007000000001fb97
- (id)mf_encodeModifiedBase64;	// IMP=0x007000000001fb87
- (id)mf_encodeBase64;	// IMP=0x007000000001fb6e
- (id)mf_encodeBase64WithoutLineBreaks;	// IMP=0x007000000001fa4a
- (id)mf_decodeModifiedBase64;	// IMP=0x007000000001fa39
- (id)mf_decodeBase64InRange:(struct _NSRange *)arg1;	// IMP=0x007000000001fa2d
- (id)mf_decodeBase64;	// IMP=0x007000000001f86b
- (id)mf_decodeQuotedPrintableForText:(_Bool)arg1;	// IMP=0x007000000001f6ec
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// IMP=0x0070000000032699
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// IMP=0x00700000000325c0
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x0070000000032576
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;	// IMP=0x0070000000032528
- (struct _NSRange)mf_rangeOfCString:(const char *)arg1;	// IMP=0x00700000000324dd
- (struct _NSRange)mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;	// IMP=0x007000000003243b
- (id)mf_subdataFromIndex:(unsigned long long)arg1;	// IMP=0x00700000000323f8
- (id)mf_subdataToIndex:(unsigned long long)arg1;	// IMP=0x00700000000323e1
- (struct _NSRange)mf_rangeOfRFC822HeaderData;	// IMP=0x007000000003207b
- (id)mf_decodeUuencoded;	// IMP=0x00700000000377c8
@end
