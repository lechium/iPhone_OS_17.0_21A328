//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLICoreDataCommands : NSObject
{
}

+ (id)convertToTerminalValueFromValue:(id)arg1 forRelationship:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x002000000001d6f8
+ (id)convertToTerminalValueFromValue:(id)arg1 forAttribute:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x001000000001d482
+ (id)convertToValueFromTerminalValue:(id)arg1 forRelationship:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x001000000001ccf0
+ (id)convertToValueFromTerminalValue:(id)arg1 forAttribute:(id)arg2 inManagedObjectContext:(id)arg3;	// IMP=0x001000000001c9ba
+ (id)persistentContainer;	// IMP=0x001000000001c30c
+ (void)setPersistentContainerProvider:(CDUnknownBlockType)arg1;	// IMP=0x001000000001c2eb
+ (CDUnknownBlockType)persistentContainerProvider;	// IMP=0x001000000001c2d2
+ (id)_referenceToOtherCDCommands;	// IMP=0x001000000001c1b9

@end
