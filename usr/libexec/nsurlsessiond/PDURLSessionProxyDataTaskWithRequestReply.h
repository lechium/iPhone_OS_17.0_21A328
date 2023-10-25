//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PDURLSessionProxyTaskMessage, __NSCFURLSessionTaskInfo;

@interface PDURLSessionProxyDataTaskWithRequestReply : PBCodable
{
    PDURLSessionProxyTaskMessage *_task;	// 8 = 0x8
    NSData *_taskInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000ad0c
@property(retain, nonatomic) NSData *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000000ac49
- (unsigned long long)hash;	// IMP=0x001000000000abfc
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000ab44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000aaa6
- (void)copyTo:(id)arg1;	// IMP=0x001000000000aa43
- (void)writeTo:(id)arg1;	// IMP=0x001000000000a9e6
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000a818
- (id)dictionaryRepresentation;	// IMP=0x001000000000a768
- (id)description;	// IMP=0x001000000000a6b9
@property(readonly, nonatomic) _Bool hasTaskInfo;
- (_Bool);	// IMP=0x001000000000a68f
@property(retain, setter=_setActualTaskInfo:) __NSCFURLSessionTaskInfo *_actualTaskInfo;

// Remaining properties
@property(readonly, nonatomic) _Bool hasTask;

@end
