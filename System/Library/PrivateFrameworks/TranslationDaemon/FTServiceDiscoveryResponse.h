//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTServiceDiscoveryResponse : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct ServiceDiscoveryResponse *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011b456
- (id)flatbuffData;	// IMP=0x000000000011b2cf
- (Offset_25163a58)addObjectToBuffer:(void *)arg1;	// IMP=0x000000000011ae08
- (void)zk_node_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011ac4d
- (unsigned long long)zk_node_count;	// IMP=0x000000000011abb1
- (id)zk_node_objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000011aab8
@property(readonly, nonatomic) NSArray *zk_node;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011a888
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServiceDiscoveryResponse *)arg2 verify:(_Bool)arg3;	// IMP=0x000000000011a6dd
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServiceDiscoveryResponse *)arg2;	// IMP=0x000000000011a6c8
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x000000000011a6ae
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x000000000011a697

@end

