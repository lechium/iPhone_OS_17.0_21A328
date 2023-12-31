//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTItnResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ItnResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cf8a1
- (id)flatbuffData;	// IMP=0x00000000000cf71a
- (Offset_3e5afc79)addObjectToBuffer:(void *)arg1;	// IMP=0x00000000000cf178
- (void)formatted_words_list_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cefc7
- (unsigned long long)formatted_words_list_count;	// IMP=0x00000000000cef2b
- (id)formatted_words_list_objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000cee32
@property(readonly, nonatomic) NSArray *formatted_words_list;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ceb26
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x00000000000ce97b
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ItnResponse *)arg2;	// IMP=0x00000000000ce966
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ce94c
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x00000000000ce935

@end

