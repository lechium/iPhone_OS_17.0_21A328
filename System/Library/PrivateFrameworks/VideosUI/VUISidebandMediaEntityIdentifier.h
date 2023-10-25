//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSString, VUIMediaEntityType;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaEntityIdentifier : NSObject
{
    NSManagedObjectID *_managedObjectID;	// 8 = 0x8
    VUIMediaEntityType *_mediaEntityType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001292ad
@property(copy, nonatomic) VUIMediaEntityType *mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property(retain, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000129173
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000129124
- (id)init;	// IMP=0x00000000001290b5
- (id)initWithManagedObjectID:(id)arg1 mediaEntityType:(id)arg2;	// IMP=0x0000000000128fd5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
