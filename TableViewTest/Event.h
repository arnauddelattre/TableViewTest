//
//  Event.h
//  TableViewTest
//
//  Created by Alain Joliveau on 31/05/12.
//  Copyright (c) 2012 Alike-Group. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Event : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSNumber * deleted;

@end
