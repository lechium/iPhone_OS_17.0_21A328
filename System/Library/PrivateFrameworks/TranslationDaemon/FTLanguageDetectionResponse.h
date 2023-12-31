//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLanguageDetectionResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct LanguageDetectionResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000135bb3
- (id)flatbuffData;	// IMP=0x0000000000135a2c
- (Offset_401827d8)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000013548a
- (void)predictions_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001352d9
- (unsigned long long)predictions_count;	// IMP=0x000000000013523d
- (id)predictions_objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000135144
@property(readonly, nonatomic) NSArray *predictions;
@property(readonly, nonatomic) NSString *detected_locale;
@property(readonly, nonatomic) NSString *return_string;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000134e38
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000134c8d
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageDetectionResponse *)arg2;	// IMP=0x0000000000134c78
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000134c5e
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000134c47

@end

