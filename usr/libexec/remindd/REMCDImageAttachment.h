//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface REMCDImageAttachment
{
}

+ (id)cdEntityName;	// IMP=0x00100000000077e7
+ (_Bool)isAbstract;	// IMP=0x00100000000077df
+ (id)fetchRequest;	// IMP=0x001000000006d2b1
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;	// IMP=0x0040000000452970
- (id)attachmentRepresentationAndReturnError:(id *)arg1;	// IMP=0x00100000005365d0

// Remaining properties
@property(nonatomic) short height; // @dynamic height;
@property(nonatomic) short width; // @dynamic width;

@end

