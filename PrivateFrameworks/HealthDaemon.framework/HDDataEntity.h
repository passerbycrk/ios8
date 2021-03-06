/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthDaemon/HDHealthEntity.h>

#import <HealthDaemon/HDDataEntity-Protocol.h>
#import "HDSyncEntity-Protocol.h"

@interface HDDataEntity : HDHealthEntity <HDDataEntity, HDSyncEntity>
{
}

+ (void)performSyncAction:(long long)arg1 withObject:(id)arg2 fromStore:(id)arg3 healthDaemon:(id)arg4;
+ (id)syncEntitiesWithStartAnchor:(id)arg1 endAnchor:(id)arg2 healthDaemon:(id)arg3 actionHandler:(id)arg4;
+ (id)syncEntityIdentifier;
+ (long long)preferredEntityType;
+ (id)_dataObjectWithPersistentID:(long long)arg1 type:(long long)arg2 properties:(id)arg3 values:(id *)arg4 propertySetters:(id)arg5 healthDaemon:(id)arg6;
+ (id)_propertiesForFetchingDataObjectsWithAssociations:(id)arg1;
+ (Class)_ancestorWithProperty:(id)arg1;
+ (id)_aggregatedPropertySettersForDataObjectWithOrderedProperties:(id *)arg1;
+ (void)_deleteDataObjectWithUUID:(id)arg1 inDatabase:(id)arg2;
+ (id)_insertDataObject:(id)arg1 withProvenance:(unsigned long long)arg2 sourceEntity:(id)arg3 inDatabase:(id)arg4;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (Class)_associatedDataObjectClass;
+ (id)_tableValuesFromDataObject:(id)arg1;
+ (id)_propertySettersForDataObject;
+ (id)_columnsSQL;
+ (id)_databaseTable;
+ (long long)protectionClass;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)databaseTable;
+ (id)createTableSQL;
+ (id)_UUIDsForObjectsOfType:(long long)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 database:(id)arg4;
+ (id)UUIDsForObectsOfType:(long long)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (long long)countOfObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 withError:(id *)arg4;
+ (id)sourceIDsForObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)objectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 limit:(unsigned long long)arg4 anchor:(id *)arg5 error:(id *)arg6;
+ (void)enumerateObjectsOfType:(long long)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 orderBy:(id)arg4 directions:(id)arg5 limit:(unsigned long long)arg6 handler:(id)arg7;
+ (void)enumerateObjectsWithHealthDaemon:(id)arg1 predicate:(id)arg2 orderBy:(id)arg3 directions:(id)arg4 limit:(unsigned long long)arg5 handler:(id)arg6;
+ (_Bool)deleteDataObject:(id)arg1 healthDaemon:(id)arg2 error:(id *)arg3;
+ (void)insertDataObjects:(id)arg1 withProvenance:(unsigned long long)arg2 client:(id)arg3 createSourcesIfNecessary:(_Bool)arg4 healthDaemon:(id)arg5 handler:(id)arg6;
+ (id)insertDataObject:(id)arg1 withProvenance:(unsigned long long)arg2 client:(id)arg3 createSourcesIfNecessary:(_Bool)arg4 healthDaemon:(id)arg5 error:(id *)arg6;
+ (void)load;
- (id)_dataID;
- (id)dataAnchor;

@end

