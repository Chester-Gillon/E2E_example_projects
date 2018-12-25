/*
 * master_class.h
 *
 *  Created on: 5 Mar 2017
 *      Author: Mr_Halfword
 */

#ifndef MASTER_CLASS_H_
#define MASTER_CLASS_H_


class MasterClass
{
    public:
        MasterClass();
        virtual ~MasterClass();

        unsigned short masterValue;

        ChildClass m_child;
};


#endif /* MASTER_CLASS_H_ */
