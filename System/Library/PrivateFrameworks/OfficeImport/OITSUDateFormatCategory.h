//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatCategory : NSObject
{
    struct __CFDateFormatter *_initialFormatter;	// 8 = 0x8
    NSMutableArray *_entries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002528fa
- (id)newDateFromString:(id)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(id *)arg3 perfect:(_Bool *)arg4;	// IMP=0x0000000000252801
- (id)entryForSeparator:(unsigned short)arg1;	// IMP=0x0000000000252767
- (void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(id)arg3;	// IMP=0x000000000025269d
- (id)formatStringsDictionary;	// IMP=0x00000000002523d2
- (id)initialPattern;	// IMP=0x00000000002523ac
- (void)dealloc;	// IMP=0x0000000000252372
- (id)initWithInitialPattern:(id)arg1 locale:(id)arg2;	// IMP=0x00000000002522ca

@end

