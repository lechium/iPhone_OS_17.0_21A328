//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSLocale, NSString;
@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface AVMetadataItemInternal : NSObject
{
    struct OpaqueFigMetadataReader *reader;	// 8 = 0x8
    long long itemIndex;	// 16 = 0x10
    NSString *identifier;	// 24 = 0x18
    NSString *keySpace;	// 32 = 0x20
    id <NSObject><NSCopying> key;	// 40 = 0x28
    NSString *commonKey;	// 48 = 0x30
    NSLocale *locale;	// 56 = 0x38
    NSString *extendedLanguageTag;	// 64 = 0x40
    NSString *languageCode;	// 72 = 0x48
    id <NSObject><NSCopying> value;	// 80 = 0x50
    CDStruct_1b6d18a9 time;	// 88 = 0x58
    CDStruct_1b6d18a9 duration;	// 112 = 0x70
    NSDate *startDate;	// 136 = 0x88
    NSDate *discoveryTimestamp;	// 144 = 0x90
    NSString *dataType;	// 152 = 0x98
    NSDictionary *extras;	// 160 = 0xa0
}

@end
