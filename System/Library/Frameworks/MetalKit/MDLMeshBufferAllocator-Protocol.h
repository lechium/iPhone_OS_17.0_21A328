//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalKit/NSObject-Protocol.h>

@class NSArray, NSData;
@protocol MDLMeshBuffer, MDLMeshBufferZone;

@protocol MDLMeshBufferAllocator <NSObject>
- (id <MDLMeshBuffer>)newBufferFromZone:(id <MDLMeshBufferZone>)arg1 data:(NSData *)arg2 type:(unsigned long long)arg3;
- (id <MDLMeshBuffer>)newBufferFromZone:(id <MDLMeshBufferZone>)arg1 length:(unsigned long long)arg2 type:(unsigned long long)arg3;
- (id <MDLMeshBuffer>)newBufferWithData:(NSData *)arg1 type:(unsigned long long)arg2;
- (id <MDLMeshBuffer>)newBuffer:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (id <MDLMeshBufferZone>)newZoneForBuffersWithSize:(NSArray *)arg1 andType:(NSArray *)arg2;
- (id <MDLMeshBufferZone>)newZone:(unsigned long long)arg1;
@end
