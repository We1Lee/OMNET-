//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package Nodes;

simple App like IApp
{
    parameters:
        int adress;//Local node Adress
        string destAddresses;
        volatile double sendIaTime @unit(s)=default(exponential(1s));
        volatile int packetLength@unit(byte);//length of one message 
        @display("i=block/broeser");
        @signal[endToEndDelay](type="simtime_t");
        @signal[hopCount](type="long");
        @signal[sourceAddress](type="long");
        @statistic[endToEndDelay](title="end to end delay of arrived packets";unit= s;record =vector,mean,max;interpolationmode=none);
        @statistic[hopCount](title="hop count of arriced packes";interpolationmode=none;record=vector?,mean,max);
        @statistic[sourceAddress](title="source address of arrived packets";interpolationmode=none;record=vector?);
     gates:
         input in;
         output out;       
        
}

























