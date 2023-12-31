//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSEntityMapping, NSError, NSManagedObjectModel;

__attribute__((visibility("hidden")))
@interface _NSMappingModelBuilder : NSObject
{
    NSManagedObjectModel *_sourceModel;	// 8 = 0x8
    NSManagedObjectModel *_destinationModel;	// 16 = 0x10
    NSEntityMapping *_currentEntityMapping;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

+ (void)setMigrationDebugLevel:(int)arg1;	// IMP=0x006000000005ee95
+ (int)migrationDebugLevel;	// IMP=0x006000000005ee7c
- (void)dealloc;	// IMP=0x000000000005ef17
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2;	// IMP=0x000000000005eeae

@end

