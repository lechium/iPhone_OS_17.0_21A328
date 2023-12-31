//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeCore/NSObject-Protocol.h>

@class NSManagedObjectContext, NSPersistentStore;

@protocol STPersistenceControllerProtocol <NSObject>
@property(readonly) NSPersistentStore *cloudStore;
@property(readonly) NSPersistentStore *localStore;
@property(readonly, nonatomic) _Bool hasStoreLoaded;
@property(readonly, nonatomic) NSManagedObjectContext *viewContext;
- (NSManagedObjectContext *)newBackgroundContext;
- (_Bool)saveContext:(NSManagedObjectContext *)arg1 error:(id *)arg2;
- (void)performBackgroundTaskAndWait:(void (^)(NSManagedObjectContext *))arg1;
- (void)performBackgroundTask:(void (^)(NSManagedObjectContext *))arg1;
@end

